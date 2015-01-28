#include "compiler/rules/built_in_symbols.h"

namespace tree_sitter {
namespace rules {

Symbol END_OF_INPUT() { return Symbol(-1, SymbolOptionToken); }
Symbol ERROR() { return Symbol(-2, SymbolOptionToken); }
Symbol START() { return Symbol(-3); }
Symbol DOCUMENT() { return Symbol(-4); }
Symbol NONE() { return Symbol(-5); }

}  // namespace rules
}  // namespace tree_sitter
