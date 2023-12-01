#!/bin/bash

# Task3
# Write bash script to download video from youtube

# Check if a YouTube URL is provided
if [ $# -eq 0 ]; then
    echo "Usage: $0 <youtube_url>"
    exit 1
fi

# Set YouTube URL
youtube_url=$1

# Download the video using yt-dlp
yt-dlp -o "~/Downloads/%(title)s.%(ext)s" "$youtube_url"

echo "Video downloaded successfully."

