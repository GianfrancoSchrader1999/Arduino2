/**********************************************************************************
**                                                                               **
**                          Control Structures  2                                **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int tempAigua = 98;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempAigua > 100)
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  } 
  else if (tempAigua == 100) 
  {
    Serial.print("Aigua a 100c!");
  }   
  else if (tempAigua >= 90 && tempAigua < 100)
  {
    Serial.print("Aigua apunt de bullir!");
  }
  else  
  {
    Serial.print("Aigua encara no bull!");
  }
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
