🚀 Autoencoder-Based Edge AI System for Real-Time Multi-Sensor Industrial Predictive Maintenance
📌 Overview
<img width="1280" height="960" alt="image" src="https://github.com/user-attachments/assets/e6eaea35-8d19-43c2-986b-289eee504469" />

This project presents a plug-and-play Edge AI-based predictive maintenance system for real-time industrial machine monitoring.

The system integrates multi-sensor data acquisition, real-time signal processing, and embedded machine learning into a compact, standalone platform that operates entirely on-device without cloud dependency.

A key highlight is its unsupervised learning approach, where the system learns normal machine behavior automatically from collected data, eliminating the need for labeled fault datasets.

🎯 Key Features
🔌 Plug-and-Play Architecture
Easily deployable system with minimal setup, adaptable to different machines without major reconfiguration
🧠 Unsupervised Learning
Trained only on normal operating data, no labeled fault data required
⚡ Edge AI Processing
Real-time inference on STM32 (no cloud, low latency)
📡 Multi-Sensor Data Fusion
Combines mechanical, electrical, and thermal parameters
📊 Real-Time Monitoring & Dashboard
Live visualization using ESP32 web interface
⚠️ Problem Statement

Traditional systems:

Require manual configuration and calibration
Depend on labeled datasets
Use cloud/offline processing
Lack scalability and adaptability

There is a need for a self-learning, plug-and-play system that can:

Automatically adapt to machine behavior
Work in real-time
Operate independently on embedded hardware
💡 Proposed Solution

A compact, plug-and-play predictive maintenance system that:

Automatically collects machine data
Learns normal behavior using unsupervised data collection
Detects anomalies in real-time using an embedded autoencoder model
Provides actionable insights like health, trend, and RUL
🏗️ System Architecture
🔹 Plug-and-Play Design
Sensors can be attached directly to machines
Minimal configuration required
Automatically adapts after collecting normal data
No need for machine-specific reprogramming
📡 Data Collection (Unsupervised Learning)
🔹 Key Concept: Unsupervised Data Collection
Only healthy (normal) machine data is collected
No manual labeling required
System learns baseline behavior automatically
🔹 Process:
STM32 collects real-time sensor data
Extracts features (14-dimensional vector)
Sends data via UART to Python
Python stores dataset in CSV format
Dataset is normalized and used for training

➡️ This enables self-learning behavior, making the system scalable and easy to deploy

📊 Feature Extraction
Time-Domain:
RMS, Peak, Crest Factor
Variance, Kurtosis
Frequency-Domain (FFT):
Dominant Frequency
Harmonic Score
Peak Count
Additional:
Temperature & Temperature Rise
Voltage & Current
RPM
Vibration Power Correlation

➡️ 14 Features Total representing full machine condition

🤖 Machine Learning Model
Autoencoder (Unsupervised)
Learns normal patterns only
Detects deviations using reconstruction error (MSE)
Why Unsupervised?
No need for fault datasets
Works in real industrial scenarios
Adapts to different machines
⚙️ Embedded AI Implementation
Model converted to TensorFlow Lite
Deployed using X-CUBE-AI
Runs fully on STM32 microcontroller
Real-Time Outputs:
Anomaly Status
Health Percentage
Confidence Level
Trend Analysis
Remaining Useful Life (RUL)
🔍 Hybrid Fault Detection
AI-Based:
Detects abnormal behavior using MSE
Rule-Based:
Bearing Fault → High kurtosis
Imbalance/Misalignment → Harmonic patterns
Thermal Fault → High temperature
Electrical Fault → Abnormal current

➡️ Improves reliability and interpretability

📈 Dashboard (ESP32)
Real-time web-based monitoring
Displays:
Machine health
Trends
Fault alerts
Sensor data
🔧 Hardware Components
STM32F401RE
ADXL345 (Vibration)
DS18B20 (Temperature)
ACS712 (Current)
ZMPT101B (Voltage)
Hall Sensor (RPM)
ESP32 (Dashboard)
💻 Software Tools
STM32CubeIDE
X-CUBE-AI
Python (Data collection + training)
TensorFlow/Keras
Arduino IDE
CMSIS-DSP (FFT)
✅ Advantages
🔌 Plug-and-play deployment
🧠 No labeled data required (unsupervised)
⚡ Real-time processing (edge computing)
📉 Reduced downtime and maintenance cost
📦 Compact and scalable system
🚧 Limitations
Requires initial normal data collection phase
Performance depends on sensor placement
Very early fault detection can be challenging
🔮 Future Scope
Adaptive thresholding
More advanced deep learning models
IoT/cloud integration
Industrial-scale deployment
Automated calibration for true plug-and-play
📌 Conclusion

This project delivers a plug-and-play, self-learning predictive maintenance system that combines:

Multi-sensor data acquisition
Unsupervised machine learning
Embedded AI

By enabling real-time, on-device anomaly detection without labeled data, the system provides a practical, scalable solution for industrial monitoring.
project drive link
[https://drive.google.com/file/d/1CfSeiLAhKfbPdkFvTub40x4gUAN5iGfD/view?usp=drive_link](https://drive.google.com/drive/folders/1WUPTfjxUpbxye_7jdTCb1g6VbacXkB2a?usp=drive_link)
