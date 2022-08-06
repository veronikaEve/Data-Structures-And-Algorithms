
//	Function to get the middle element of the given linked list
Hero * MiddleElement(Hero *first) {
	if(first == NULL){
		//Return the head if the head is null
		return first;
	}
	//Creating two reference for the linked list
	//Slow Reference
	Hero *slow=first;
	//Fast Reference
	Hero *fast=first;
	//Iterate the Linked list using fast reference of the linked list
	while(fast->next != NULL && fast->next->next != NULL){
		//Update the slow pointer
		slow=slow->next;
		//Update the fast pointer
		fast=fast->next->next;
	}
	//Return the slow reference that contains the middle element of the linked list
	return slow;
}

//  Function to sort the two halves of the linked list
Hero* SortedMerge(Hero* left, Hero* right)
{
	Hero *result = NULL;

	/* Base cases */
	if (left == NULL)
		return right;
	else if (right == NULL)
		return left;

	/* Pick either a or b, and recur */
	cout << left->name << ": " << left->eyeColour << " | " << right->name << ": " << right->eyeColour << endl;

	if (left->eyeColour <= right->eyeColour) {
		cout << "  left->race <= right->race: " << (left->eyeColour <= right->eyeColour) << endl;
		cout << "  left->race >= right->race: " << (left->eyeColour >= right->eyeColour) << endl;

		result = left;
		result->next = SortedMerge(left->next, right);
	}
	else {
		cout << "else" << endl;
		result = right;
		result->next = SortedMerge(left, right->next);
	}
	return result;
}

//	Function to perform the merge sort of the linked list
Hero * mergeSort(Hero *first){
	//Checking the base conditions
	if(first == NULL||first->next == NULL){
		return first;
	}
	//Getting the middle element
	Hero *firstHalf = MiddleElement(first);
	//Creating second half of the linked list
	Hero *secondHalf = firstHalf->next;
	//Break the middle element reference
	firstHalf->next = NULL;

	//Recursively call the two halves of the linked list
	Hero *left = mergeSort(first);
	Hero *right = mergeSort(secondHalf);
	//call for the sorting
	Hero* sortedList = SortedMerge(left,right);
	//Return the complete sorting linked list
	return sortedList;
};
