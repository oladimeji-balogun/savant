#!/bin/bash
set -euo pipefail

# Use VCPKG_ROOT if set, otherwise fall back to the default clone location.
VCPKG_ROOT="${VCPKG_ROOT:-$HOME/vcpkg}"
TOOLCHAIN="$VCPKG_ROOT/scripts/buildsystems/vcpkg.cmake"

if [ ! -f "$TOOLCHAIN" ]; then
  echo "Error: vcpkg toolchain not found at $TOOLCHAIN" >&2
  echo "Set VCPKG_ROOT to your vcpkg install, or clone it to ~/vcpkg." >&2
  exit 1
fi

cmake -B build -DCMAKE_TOOLCHAIN_FILE="$TOOLCHAIN"
cmake --build build

# Symlink the compile database to the project root so clangd finds it by default.
if [ -f build/compile_commands.json ]; then
  ln -sf build/compile_commands.json compile_commands.json
fi
