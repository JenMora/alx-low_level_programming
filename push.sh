#!/bin/bash

# Specify the Git repository directory
repo_dir="alx-low_level_programming"

# Change to the repository directory
cd "$repo_dir"

# Add all files to the staging area
git add --all

# Commit the changes with a specified message
commit_message="Scripted commit"
git commit -m "$commit_message"

# Push the changes to the remote repository
git push
