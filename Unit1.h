//---------------------------------------------------------------------------
#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *Image;
        TBitBtn *Button1;
        TLabel *Label1;
        TBitBtn *Button2;
        TLabel *Label2;
        TBitBtn *Button3;
        TLabel *Label3;
        TBitBtn *Button5;
        TLabel *Label5;
        TBitBtn *Button4;
        TLabel *Label4;
        TBitBtn *ExitButton;
        TBitBtn *Button6;
        TLabel *Label6;
        void __fastcall ExitButtonClick(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
                // Переменные
        AnsiString Path1;       // Пути к программам
        AnsiString Path2;
        AnsiString Path3;
        AnsiString Path4;
        AnsiString Path5;
        AnsiString Path6;
        AnsiString Dir1;        // Пути к папкам программы
        AnsiString Dir2;
        AnsiString Dir3;
        AnsiString Dir4;
        AnsiString Dir5;
        AnsiString Dir6;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
