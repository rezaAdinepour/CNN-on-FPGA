# FPGA-Based Implementation of CNN using High Level Synthesis (HLS)

This repository contains the source files and scripts for implementing a Convolutional Neural Network on FPGA using Vitis High-Level Synthesis (HLS). The design leverages HLS to convert high-level C/C++ descriptions into optimized hardware implementations for FPGAs.

## Features

- High-performance CNN inference on FPGA.
- Implemented using Vitis HLS for efficient synthesis and optimization.
- Modular design for easy modification and integration.


## Implementation

### Training Phase





### Inference Phase



## Getting Started

### Prerequisites

Make sure you have the following tools installed on your system:

- [Xilinx Vitis HLS](https://www.xilinx.com/products/design-tools/vitis.html)
- A compatible Xilinx FPGA development board. (I use [Digilent Zedboard](https://digilent.com/reference/programmable-logic/zedboard/start?srsltid=AfmBOopD31UhpS6JNzArP7-XzqL7dpQ8sG8Q0-w0Np0Z0SEVcadnrD-7))

### Clone the Repository

Clone this repository to your local machine:

```bash
git clone https://github.com/rezaAdinepour/CNN-on-FPGA.git
cd CNN-on-FPGA
```

## Project Structure

The repository is organized as follows:
```
cnn-fpga-vitis-hls/
├── HW/                     # Hardware implementation files
│   └── src/                
│       ├── Data/           
│       ├── cnn.cpp         
│       └── cnn.h           
├── SW/                     # Software implementation files
│   ├── Data/
│   ├── Header/
│   ├── Model/ 
│   ├── gen_data.ipynb      
│   ├── train.ipynb         
│   └── utils.py            
└── Makefile
```

## Creating the Project in Vitis HLS

1. Open **Vitis HLS**.
2. Create a new project:
   - **Project Name**: Choose a name for your project.
   - **Project Directory**: Set the directory where you want the project files to be stored.
3. Add the source files:
   - Copy the contents of the `HW/src/` directory into the `src/` directory of your project.
   - Add the source files to your Vitis HLS project.
4. Set the top function:
   - Specify the top-level function for synthesis.
5. Configure synthesis settings:
   - Optimize for latency, throughput, or area based on your requirements.
  

## Building the Project

After setting up the project:

1. Run **C Simulation** to verify the functionality of the design.
2. Perform **Synthesis** to generate the RTL design.
3. Use **C/RTL Co-Simulation** to validate the synthesized RTL against the C model.
4. Export the IP core or generate the bitstream for deployment on FPGA.

## Additional Notes

- Modify the `HW/src/` files to customize the CNN hardware implementation.
- Use the provided Python scripts in the `SW/` folder for training the model and generating data.
- You can find the trained model in the `Model/` folder.
- Refer to the Vitis HLS documentation for advanced optimization techniques.

