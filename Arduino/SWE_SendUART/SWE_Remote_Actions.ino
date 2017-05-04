void Up() {
  SWEBot.write(Up_ptr, 3);
  delay(200);
  SWEBot.write(Up_ptr + 3, 3);
  delay(200);
  
  SWEBot.write(Stop_ptr, 3);
  delay(200);
  SWEBot.write(Stop_ptr + 3, 3);
  delay (1000);
}
void Down() {
  SWEBot.write(Down_ptr, 3);
  //  delay(210);
  //  SWEBot.write(Down_ptr + 3, 3);
  delay(210);
  SWEBot.write(Stop_ptr, 3);
  //  delay(210);
  SWEBot.write(Stop_ptr + 3, 3);
  delay (997);
}
void Right() {
  SWEBot.write(Right_ptr, 3);
  delay(210);
  SWEBot.write(Right_ptr + 3, 3);
  delay(210);
  SWEBot.write(Stop_ptr, 3);
  delay(210);
  SWEBot.write(Stop_ptr + 3, 3);
  delay (997);
}
void Left() {
  SWEBot.write(Left_ptr, 3);
  delay(210);
  SWEBot.write(Left_ptr + 3, 3);
  delay(210);
  SWEBot.write(Stop_ptr, 3);
  delay(210);
  SWEBot.write(Stop_ptr + 3, 3);
  delay (997);
}
void Stop() {
  SWEBot.write(Stop_ptr, 3);
  delay(210);
  SWEBot.write(Stop_ptr + 3, 3);
  delay(210);
  SWEBot.write(Stop_ptr, 3);
  delay(210);
  SWEBot.write(Stop_ptr + 3, 3);
  delay (997);
}
