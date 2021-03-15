#include "exe/main_common.h"

namespace Envoy {

/**
 * Intended to have the exact same implementation as main() from
 * main.cc but with a new name so that it can be embedded as a
 * library.
 *
 * See also the Bazel target 'envoy_main_embed_lib' in BUILD.
 */
inline int embed(int argc, char** argv) { return Envoy::MainCommon::main(argc, argv); }

} // namespace Envoy
