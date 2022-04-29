int light = A1;

void setup() {
 pinMode(light, INPUT);
}

void loop() {
    int brightness = analogRead(light);
    int light_level = 5;
    
    if(brightness > light_level)
    {
        Particle.publish("light", "bright", PRIVATE);
    }
    
    if(brightness < light_level)
    {
        Particle.publish("light", "dark", PRIVATE);
    }
    
    delay(5000);
}