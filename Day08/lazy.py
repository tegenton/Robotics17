myfile = open('repetitive.ino', 'w')

myfile.write("""
int r = 9;
int g = 10;
int b = 11;

void setup(){
    pinMode(r, OUTPUT);
    pinMode(g, OUTPUT);
    pinmode(b, OUTPUT);
}

void loop(){""")


for x in range(255):
    myfile.write(f"""
    analogWrite(b,{255-x});
    analogWrite(r, {x});""")

for x in range(255):
    myfile.write(f"""
    analogWrite(r,{255-x});
    analogWrite(g, {x});""")

for x in range(255):
    myfile.write(f"""
    analogWrite(g,{255-x});
    analogWrite(b, {x});""")

myfile.write("\n}")
myfile.close()