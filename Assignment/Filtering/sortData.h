//	Function to get the middle element of the linked list
//  Splits the given list into front and back halves, and returns the two lists using the reference parameters.
//  Uses the fast/slow pointer strategy.
Hero *getMiddleElement(Hero* head, Hero** frontRef, Hero** backRef) {
	// Creating the two references for the linked list
	Hero *slow = head; // Slow Reference
	Hero *fast = head->next; // Fast Reference

	// Iterate the list using the fast pointer
	// fast is incremented twice and slow is incremented once.
	while (fast != NULL) {
		fast = fast->next;
		if (fast != NULL) {
			slow = slow->next;
			fast = fast->next;
		}
	}

	// slow is at the midpoint.
	*frontRef = head;
	*backRef = slow->next;
	slow->next = NULL;
}

//  Function to sort the two halves of the linked list
Hero *mergeSortedList(Hero* left, Hero* right) {
	Hero *result = NULL;

	if (left == NULL)
		return right;
	else if (right == NULL)
		return left;

	// Compare values and calls itself with the next set of values. Recursive strategy
	if (compareElements(left->getAttribute(), right->getAttribute())) {
		result = left;
		result->next = mergeSortedList(left->next, right);
	}
	else {
		result = right;
		result->next = mergeSortedList(left, right->next);
	}
	return result;
}

// Performs merge sort on the linked list
// Sorts the linked list by changing next pointers
Hero *mergeSort(Hero **firstRef) {

	Hero* head = *firstRef; // assigns the value of first to the head variable
	Hero* frontRef; // pointer to the first element of the list
	Hero* backRef; // pointer to the last element of the list

	if ((head == NULL) || (head->next == NULL)) {
		return head;
	}

	getMiddleElement(head, &frontRef, &backRef);

	// Use mergeSort on the two new halves. Recursive strategy
	mergeSort(&frontRef);
	mergeSort(&backRef);

	// Sorted List.
	*firstRef = mergeSortedList(frontRef, backRef);
};