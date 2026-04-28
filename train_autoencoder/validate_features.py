import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv("data/machine_01/healthy.csv")

features = ["rms", "peak", "crest", "kurtosis"]

df[features].plot(
    subplots=True,
    figsize=(10, 6),
    title="Healthy Machine – Feature Trends"
)

plt.tight_layout()
plt.show()
