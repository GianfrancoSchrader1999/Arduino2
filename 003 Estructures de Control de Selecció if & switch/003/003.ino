/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int tempAigua = 100;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempAigua > 100)
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  } 
  if (tempAigua <= 100)
  {
    Serial.print("Aigua no supera els 100C, encara no bull!");
  } 
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}
