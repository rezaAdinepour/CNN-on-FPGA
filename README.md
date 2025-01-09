# FPGA-Based Implementation of CNN using High Level Synthesis (HLS)

This repository contains the source files and scripts for implementing a Convolutional Neural Network on FPGA using Vitis High-Level Synthesis (HLS). The design leverages HLS to convert high-level C/C++ descriptions into optimized hardware implementations for FPGAs.

## Features

- High-performance CNN inference on FPGA.
- Implemented using Vitis HLS for efficient synthesis and optimization.
- Modular design for easy modification and integration.

## Getting Started

### Prerequisites

Make sure you have the following tools installed on your system:

- [Xilinx Vitis HLS](https://www.xilinx.com/products/design-tools/vitis.html)
- A compatible Xilinx FPGA development board.

### Clone the Repository

Clone this repository to your local machine:

```bash
git clone https://github.com/rezaAdinepour/CNN-on-FPGA.git
cd CNN-on-FPGA
```

## Project Structure

The repository is organized as follows:

cnn-fpga-vitis-hls/
├── HW/                     # Hardware implementation files
│   └── src/                # Source files for hardware design
│       ├── Data/           # Data handling source files
│       ├── cnn.cpp         # C++ source code for CNN implementation
│       └── cnn.h           # Header file for CNN functions
├── SW/                     # Software implementation files
│   ├── gen_data.ipynb      # Jupyter notebook for data generation
│   ├── train.ipynb         # Jupyter notebook for training the CNN model
│   └── utils.py            # Python utilities for handling model data
├── Data/                   # Directory containing training and test data
├── Header/                 # Directory containing header files (if any)
├── Model/                  # Directory for storing the trained CNN model
├── README.md               # This file
├── LICENSE                 # License information
└── Makefile                # Makefile for automation (if applicable)
