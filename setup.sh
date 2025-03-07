#!/bin/bash

QMK_DIR="$HOME/qmk_firmware"  # Path to your QMK firmware directory
KEYBOARD="splitkb/aurora/sofle_v2"             # Your keyboard name
KEYMAP="henrybley"         # Your keymap name
REPO_DIR="$HOME/my_qmk_keymap" # Where to create your keymap repo

if [ ! -d "$QMK_DIR" ]; then
  echo "QMK directory not found at $QMK_DIR"
  exit 1
fi

# Create the keymap directory in QMK if it doesn't exist
QMK_KEYMAP_DIR="$QMK_DIR/keyboards/$KEYBOARD/keymaps/$KEYMAP"
mkdir -p "$QMK_KEYMAP_DIR"

# Create symbolic links for each file in the repo
for file in *.{c,h,json,mk}; do
  if [ -f "$file" ]; then
    echo "Creating symlink for $file"
    ln -sf "$(pwd)/$file" "$QMK_KEYMAP_DIR/$file"
  fi
done

echo "Setup complete. Your keymap files are now symlinked to QMK."
