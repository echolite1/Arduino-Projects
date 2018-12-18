#include <LM15SGFNZ07.h>
 
LM15SGFNZ07 lcd(6, 5, 4, 3, 2);
 
void setup()
{
  lcd.init_lcd();
  lcd.contrast_lcd(0x11f); // kontrast w formacie hexadecimal (0x11f) = 287
  delay(50);
  lcd.clear_lcd(BLUE); 
}
 
void loop()
{  
	lcd.line_lcd(0, 101, 0, 80, RED);
	lcd.line_lcd(101, 0, 0, 80, RED);
	
	lcd.area_lcd(48, 0, 80, 5,  RED);
	lcd.area_lcd(0, 38, 5, 101,  RED);
	
	lcd.frame_lcd(0, 0, 79, 100, 2, WHITE);
	delay(200);
}
