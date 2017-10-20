#ifndef MAINBODYRULE1_H
#define MAINBODYRULE1_H

#include "MainBody.h"
#include "Function.h"

class MainBodyRule3 : public MainBody
{
	private:
		Function* f_;
	public:
		MainBodyRule3():f_(NULL){}
		MainBodyRule3(Function* f): f_(f){}
		virtual	~MainBodyRule3(){
			delete f_;
		}
		MainBodyRule3(const MainBodyRule3& t): f_(t.f_)
		{}
		void set_F_(Function& f)
		{
            f_ = f;
        }
		const Function* f_() const 
		{
			return f_;
		}		
}


#endif