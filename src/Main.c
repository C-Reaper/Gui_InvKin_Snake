#include "/home/codeleaded/System/Static/Library/WindowEngine1.0.h"
#include "/home/codeleaded/System/Static/Library/InvKin.h"

InvKin ik;

void Setup(AlxWindow* w){
    ik = InvKin_New((Vec2){ GetWidth() / 2,GetHeight() / 2 },100.0f,0.0f,10);
}
void Update(AlxWindow* w){
	InvKin_Update(&ik,GetMouse());

	Clear(BLACK);

	InvKin_Render(&ik,WINDOW_STD_ARGS);
}
void Delete(AlxWindow* w){
	InvKin_Free(&ik);
}

int main(int argc,char** argv){
    if(Create("Inverse Kinemetics Snake",1900,1000,1,1,Setup,Update,Delete))
        Start();
    return 0;
}