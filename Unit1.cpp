//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
        // Определим пути к программам
Path1 = "V:\\Foxbasa\\in_6.exe";
Dir1 = "V:\\Foxbasa\\";
Path2 = "C:\\Program Files\\Microsoft Office\\Office\\winword.exe";
Dir2 = "C:\\Program Files\\Microsoft Office\\Office\\";
Path3 = "";
Dir3 = "";
Path4 = "V:\\Foxbasa\\ZAKAZ\\PROGS\\zakaz.exe";
Dir4 = "V:\\Foxbasa\\ZAKAZ\\PROGS\\";
Path5 = "C:\\Program Files\\Works2\\msworks.exe";
Dir5 = "C:\\Program Files\\Works2\\";
Path6 = "C:\\WINDOWS\\system32\\tsadmin.exe";
Dir6 = "C:\\WINDOWS\\system32\\";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ExitButtonClick(TObject *Sender)
{
        // Выход
Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
        // Кн 1 - Fox
ShellExecute(Handle,"open",Path1.c_str(),NULL,Dir1.c_str(),SW_SHOWMAXIMIZED);
Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
        // Кн 2 - Word
ShellExecute(Handle,"open",Path2.c_str(),NULL,Dir2.c_str(),SW_SHOWMAXIMIZED);
Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
        // Кн 3 - 1С
//ShellExecute(Handle,"open",Path3.c_str(),NULL,Dir3.c_str(),SW_SHOWMAXIMIZED);
Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
        // Кн 4 - Zakaz
ShellExecute(Handle,"open",Path4.c_str(),NULL,Dir4.c_str(),SW_SHOWMAXIMIZED);
Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
        // Кн 5 - Works
ShellExecute(Handle,"open",Path5.c_str(),NULL,Dir5.c_str(),SW_SHOWMAXIMIZED);
Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button6Click(TObject *Sender)
{
        // Кн 6 - Terminal Manager        
ShellExecute(Handle,"open",Path6.c_str(),NULL,Dir6.c_str(),SW_SHOWMAXIMIZED);
Close();
}
//---------------------------------------------------------------------------

