#include "/home/codeleaded/System/Static/Library/WindowEngine1.0.h"
#include "/home/codeleaded/System/Static/Library/InvKin.h"

InvKin ik;

void InvKin_Seg_Render_Snake(InvKin_Seg* iks,unsigned int* Target,int Width,int Height){
    //Line_RenderX(Target,Width,Height,iks->p,iks->t,0xFFFFFFFF,1.0f);
    
    const Vec2 dir = Vec2_Sub(iks->p,iks->t);
    const int index = ((void*)iks - ik.segs.Memory) / sizeof(InvKin_Seg);
    const float depth = (float)index / (float)ik.segs.size;
    const float r = Vec2_Mag(dir) * (1.0f - depth) * 50.0f + 1.0f;
    Circle_RenderX(Target,Width,Height,iks->p,r,WHITE);
}

void Setup(AlxWindow* w){
    ik = InvKin_New((Vec2){ GetWidth() / 2,GetHeight() / 2 },1.0f,0.0f,1000);
}
void Update(AlxWindow* w){
	if(Stroke(ALX_KEY_W).DOWN)  InvKin_Update_Static(&ik,GetMouse());
    else                        InvKin_Update(&ik,GetMouse());

	Clear(BLACK);

	InvKin_RenderX(&ik,WINDOW_STD_ARGS,InvKin_Seg_Render_Snake);
}
void Delete(AlxWindow* w){
	InvKin_Free(&ik);
}

int main(int argc,char** argv){
    if(Create("Inverse Kinemetics Snake",1900,1000,1,1,Setup,Update,Delete))
        Start();
    return 0;
}