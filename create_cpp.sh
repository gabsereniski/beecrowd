#!/bin/bash

if [ "$#" -ne 2 ]; then
    echo "Usage: $0 folder_name number"
    exit 1
fi

FOLDER_NAME=$1
NUMBER=$2

BASE_DIR="./solutions"

mkdir -p "$BASE_DIR/$FOLDER_NAME"

NEW_FILE="$BASE_DIR/$FOLDER_NAME/$NUMBER.cpp"

TEMPLATE="./template.cpp"

cp "$TEMPLATE" "$NEW_FILE"

echo "File created at $NEW_FILE"