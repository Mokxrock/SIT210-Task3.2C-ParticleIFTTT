int light = A0; // pin number A0

void setup() {
    pinMode(light, INPUT); // set light as input as it is detecting light 
}

void loop() {
    
    int lightLevel = analogRead(light); // read value from specific anolog pin which is A0 
    int level = 1; 
    
    if(lightLevel > level ) Particle.publish("sun", "yes", PRIVATE); // if light is detected pubish the data as "yes" under the name "sun"
    if(lightLevel < level ) Particle.publish("sun", "no", PRIVATE); // if light is not detected pubish the data as "no" under the name "sun"
    
    delay(10s); // run for 10 second

}
