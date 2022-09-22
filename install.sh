#!/bin/sh

EXEC_DIR="$HOME/.local/bin/"
CURR_DIR="$(pwd)"

[ ! -d "$EXEC_DIR" ] && mkdir "$EXEC_DIR"

sudo make install clean
cp -r "$CURR_DIR"/bar/* "$EXEC_DIR"
cd "$EXEC_DIR" && chmod +x sb-*
