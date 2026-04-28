#ifndef FEATURE_PACKET_H
#define FEATURE_PACKET_H

typedef struct {
    float rms;
    float peak;
    float crest;
    float variance;
    float kurtosis;
    float temp;
    float tempRise;
    float voltage;
    float current;
    float rpm;
} FeaturePacket;

#endif