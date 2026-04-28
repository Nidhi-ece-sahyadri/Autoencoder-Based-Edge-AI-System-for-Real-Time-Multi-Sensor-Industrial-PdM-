import numpy as np

mean = np.load("scaler_mean.npy")
std = np.load("scaler_std.npy")
threshold = np.load("threshold.npy")

print("MEAN:")
print(", ".join([f"{x:.6f}f" for x in mean]))

print("\nSTD:")
print(", ".join([f"{x:.6f}f" for x in std]))

print("\nTHRESHOLD:")
print(float(threshold))