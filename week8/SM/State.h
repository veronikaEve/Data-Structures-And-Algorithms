#include <iostream>
#include "stdafx.h"

using namespace std;

class State {
public:
	CBP callBack;
	Bulb* callBackLocation;
	State* next;
	TStates state;
	LinkedList<Transition> * transitions;

	State(TStates state){
		this->state = state;
	}

	State(TStates state,  CBP callBack, Bulb* callBackLocation) {
		this->state = state;
		this->callBack = callBack;
		this->callBackLocation = callBackLocation;
		transitions = new LinkedList<Transition>();
		next = 0;
	}

	void AddTransitions(State* from, State* to, GP guard, Bulb* guardLocation){
		transitions->Insert(new Transition(from,to,guard,guardLocation));
	}

	State* CheckGuards(bool* changed){
		for (int n = 0; n < transitions->Count(); n++){
// Can not overload pointer operators so must dereference linked list to ensure [] works.
			if((*transitions)[n]->InvokeGuard()){
				*changed = true;
				return (*transitions)[n]->GetToState();
			}
		}
		return 0;
	}

	void InvokeCallBack(){
		(callBackLocation->*callBack)();
	}

	bool operator!=(State& rhd){
		return (this->state != rhd.state);
	}

	bool operator==(State& rhd){
		return (this->state == rhd.state);
	}

};