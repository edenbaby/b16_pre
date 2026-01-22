# Use a C++ development base image
FROM gcc:12-bookworm

# Install basic development tools
RUN apt-get update && apt-get install -y \
    build-essential \
    make \
    cmake \
    gdb \
    vim \
    nano \
    && rm -rf /var/lib/apt/lists/*

# Set working directory
WORKDIR /workspace

# Copy source files
COPY . /workspace/

# Default to bash shell for development
CMD ["/bin/bash"]