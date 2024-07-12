package tree_sitter_env_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-env"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_env.Language())
	if language == nil {
		t.Errorf("Error loading Env grammar")
	}
}
