#!/bin/bash
NAMESPACE="${1:-codebase_b16_app}"
docker build -t "$NAMESPACE" .