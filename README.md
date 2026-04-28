# 🚀 Autoencoder-Based Edge AI System for Real-Time Multi-Sensor Industrial Predictive Maintenance

## 📌 Overview
This project presents a **plug-and-play Edge AI-based predictive maintenance system** for real-time industrial machine monitoring.

The system integrates **multi-sensor data acquisition, real-time signal processing, and embedded machine learning** into a **compact, standalone platform** that operates entirely on-device without cloud dependency.

A key highlight is its **unsupervised learning approach**, where the system learns **normal machine behavior automatically from collected data**, eliminating the need for labeled fault datasets.
<img width="1280" height="960" alt="image" src="https://github.com/user-attachments/assets/e6eaea35-8d19-43c2-986b-289eee504469" />

---

## 🎯 Key Features
- 🔌 **Plug-and-Play Architecture**  
  Easy deployment with minimal configuration, adaptable to different machines  

- 🧠 **Unsupervised Learning**  
  Trained only on normal data (no labeled fault data required)  

- ⚡ **Edge AI Processing**  
  Real-time inference on STM32 microcontroller  

- 📡 **Multi-Sensor Data Fusion**  
  Combines vibration, thermal, electrical, and speed parameters  

- 📊 **Real-Time Dashboard**  
  Live monitoring using ESP32 web interface  

---

## ⚠️ Problem Statement
Traditional monitoring systems:
- Depend on **single-sensor or threshold-based methods**
- Require **labeled datasets**
- Use **cloud/offline processing**
- Lack **scalability and flexibility**

There is a need for a **self-learning, plug-and-play system** capable of real-time embedded intelligence.

---

## 💡 Proposed Solution
A **compact predictive maintenance system** that:
- Automatically collects machine data  
- Learns normal behavior using **unsupervised data collection**  
- Detects anomalies in real-time using an **embedded autoencoder model**  
- Provides outputs like **health, trend, and Remaining Useful Life (RUL)**  

---

## 🏗️ System Architecture

### 🔹 Model Development Stage
- Data acquisition from sensors  
- Feature extraction (time & frequency domain)  
- Dataset creation using Python  
- Data normalization  
- Autoencoder training (normal data only)  
- Conversion to TensorFlow Lite  
- Deployment using X-CUBE-AI  

### 🔹 Real-Time Deployment Stage
- Continuous sensor data acquisition  
- Feature extraction on STM32  
- Feature normalization  
- Embedded AI inference  
- Anomaly detection using MSE  
- Data transmission to ESP32 dashboard  

---

## 🔌 Plug-and-Play Design
- Sensors can be directly attached to machines  
- Minimal setup and calibration required  
- Automatically adapts after collecting normal data  
- No need for machine-specific reprogramming  

---

## 📡 Data Collection (Unsupervised)

### 🔹 Concept
- Only **healthy machine data** is collected  
- No manual labeling required  
- System learns baseline behavior automatically  

### 🔹 Process
1. STM32 collects sensor data  
2. Extracts 14-dimensional feature vector  
3. Sends data via UART  
4. Python stores data as CSV  
5. Dataset used for training  

---

## 📊 Feature Extraction

### Time-Domain Features
- RMS  
- Peak  
- Crest Factor  
- Variance  
- Kurtosis  

### Frequency-Domain Features (FFT)
- Dominant Frequency  
- Harmonic Score  
- Peak Count  

### Additional Parameters
- Temperature & Temperature Rise  
- Voltage & Current  
- RPM  
- Vibration Power Correlation  

➡️ **Total: 14 Features**

---

## 🤖 Machine Learning Model

### Autoencoder (Unsupervised)
- Trained using only normal data  
- Learns machine behavior patterns  
- Detects anomalies using **reconstruction error (MSE)**  

---

## ⚙️ Embedded AI Implementation
- Model converted to **TensorFlow Lite**
- Deployed using **X-CUBE-AI**
- Runs on **STM32 microcontroller**

### Outputs
- Anomaly Status  
- Health Percentage  
- Confidence Level  
- Trend Analysis  
- Remaining Useful Life (RUL)  

---

## 🔍 Fault Detection

### AI-Based Detection
- Based on reconstruction error  

### Rule-Based Classification
- High Kurtosis → Bearing Fault  
- High Harmonics → Imbalance/Misalignment  
- High Temperature → Thermal Fault  
- Abnormal Current → Electrical Fault  

---

## 📈 Dashboard (ESP32)
- Web-based real-time monitoring  
- Displays:
  - Machine status  
  - Health %  
  - MSE values  
  - Trends  
  - Fault alerts  

---

## 🔧 Hardware Components
- STM32F401RE Microcontroller  
- ADXL345 (Vibration Sensor)  
- DS18B20 (Temperature Sensor)  
- ACS712 (Current Sensor)  
- ZMPT101B (Voltage Sensor)  
- Hall Effect Sensor (RPM)  
- ESP32 (Dashboard Module)  

---

## 💻 Software Tools
- STM32CubeIDE  
- X-CUBE-AI  
- Python (Data Collection & Training)  
- TensorFlow / Keras  
- Arduino IDE  
- CMSIS-DSP (FFT Processing)  

---

## 📊 Results
- Stable feature extraction in real-time  
- Accurate anomaly detection  
- Reliable hybrid fault classification  
- Real-time monitoring achieved  

---

## ✅ Advantages
- Plug-and-play deployment  
- No labeled data required  
- Real-time edge processing  
- Low latency  
- Scalable and cost-effective  

---

## 🚧 Limitations
- Requires initial normal data collection  
- Sensor placement affects accuracy  
- Early-stage faults may be subtle  

---

## 🔮 Future Scope
- Advanced deep learning models  
- Adaptive thresholding  
- IoT/cloud integration  
- Industrial-scale deployment  
- Automated calibration  

---

## 📌 Conclusion
This project demonstrates a **plug-and-play, self-learning predictive maintenance system** combining:
- Multi-sensor data acquisition  
- Unsupervised machine learning  
- Embedded AI  

It enables **real-time anomaly detection without cloud dependency**, making it a practical solution for industrial applications.

---
project drive link
[https://drive.google.com/file/d/1CfSeiLAhKfbPdkFvTub40x4gUAN5iGfD/view?usp=drive_link](https://drive.google.com/drive/folders/1WUPTfjxUpbxye_7jdTCb1g6VbacXkB2a?usp=drive_link)
