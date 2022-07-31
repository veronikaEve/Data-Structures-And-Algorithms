#include <iostream>
#include "State.h"
#include "LinkedList.h"

using namespace std;

// Finite State Machine
class FSM {
public:
	State* currentState;
	LinkedList<State>* states;

	FSM(){
		states = new LinkedList<State>();
		currentState = 0;
	}

	void AddState(State* state){
// The first state to be added becomes the initial/current state
		if (states->IsEmpty()){
			currentState = state;
			currentState->InvokeCallBack();
			states->Insert(state);
		}
		else {
// Check to ensure the state has not already been added
			if (!states->Find(state)){
				states->Insert(state);
			}
			else{
				cout << "The state has already been added" << endl;
			}
		}
	}

	void AddTransition(TStates from, TStates to, GP guardFunction, Bulb* guardLocation){
// Ensure states have been added
		State * foundState = states->Find( new State(from));
		State * toState = states->Find( new State(to));
		if (foundState != 0 && toState != 0){
			foundState->AddTransition(foundState, toState, guardFunction, guardLocation);
		}
		else{
			cout << "Error: Invalid Transition : State/s missing" << endl;
		}
	}

	void Check(){
		bool changed = false;
// Check all guards on the current state to see if a transition should take place.
// Return the new state if a guard has been meet or 0 if no guards meet.
		State * toState = currentState->CheckGuards(&changed);
// If a guard has been meet
		if (changed){
// Update the current state
			currentState = toState;
			currentState->InvokeCallBack();
		}
	}

	State* GetCurrentState(){
		return currentState;
	}
};