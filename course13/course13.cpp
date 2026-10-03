// course13.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "clsDblLinkedList.h"
#include "ClsMyQueue.h"
#include "clsMyStack.h"
#include "clsDynamicArray.h"
#include "clsMyQueueArr.h"
#include "clsMyStackArr.h"
#include "ClsMy_String.h"
#include "clsQeueLine.h"

using namespace std;

int main()
{ 
	clsQeueLine paybillsQueue("A0", 10);
	clsQeueLine SubscriptionsQueue("B0", 5);
	paybillsQueue.IssueTicket();
	paybillsQueue.IssueTicket();
	paybillsQueue.IssueTicket();
	paybillsQueue.IssueTicket();
	paybillsQueue.IssueTicket();
	paybillsQueue.IssueTicket();
	paybillsQueue.printInfo();
	cout << "tickets:";
	paybillsQueue.printTicketLineinRTL();
	cout << endl;
	cout << "tickets:";
	paybillsQueue.printTicketLineinLTR();

	paybillsQueue.printALLticket();
	paybillsQueue.serveNextClient();
	cout << "\n\n pay Bill Queue after serving on client\n";
	paybillsQueue.printInfo();
	cout << "\nSubscriptions Queue Info:\n";
	SubscriptionsQueue.IssueTicket();
	SubscriptionsQueue.IssueTicket();
	SubscriptionsQueue.IssueTicket();
	SubscriptionsQueue.printInfo();
	cout << "tickets:";
	SubscriptionsQueue.printTicketLineinRTL();
	cout << endl;
	cout << "tickets:";
	SubscriptionsQueue.printTicketLineinLTR();

	SubscriptionsQueue.printALLticket();
	
	SubscriptionsQueue.serveNextClient();
	cout << "\n\n pay Bill Queue after serving on client\n";
	SubscriptionsQueue.printInfo();
/*	clsMyString s1;
	cout << "\ns1=" << s1.value;
	s1.value = "mohamed";
	cout << "\ns1=" << s1.value;
	s1.value = "mohamed1";
	cout << "\ns1=" << s1.value;
	s1.value = "mohamed2";
	cout << "\ns1=" << s1.value;
	s1.value = "mohamed3";
	cout << "\ns1=" << s1.value;
	cout << "\n\nundo";
	s1.undo();
	cout << "\nS1 after undo\n" <<"s1=" << s1.value;
	s1.undo();
	cout << "\nS1 after undo\n" << "s1=" << s1.value;
	s1.undo();
	cout << "\nS1 after undo\n" << "s1=" << s1.value;
	s1.undo();
	cout << "\nS1 after undo\n" << "s1=" << s1.value;
	s1.Redo();
	cout << "\nS1 after Redo\n" << "s1=" << s1.value;

	s1.Redo();
	cout << "\nS1 after Redo\n" << "s1=" << s1.value;
	s1.Redo();
	cout << "\nS1 after Redo\n" << "s1=" << s1.value;
	
	s1.Redo();
	cout << "\nS1 after Redo\n" << "s1=" << s1.value;

	

	



	/*clsMystackArr<int>MyStack;
	MyStack.push(10);
	MyStack.push(20);
	MyStack.push(30);
	MyStack.push(40);
	MyStack.push(50);
	cout << "\nStack :\n";
	MyStack.printList();
	cout << "\n Stack size:" << MyStack.size();
	cout << "\n stack top:" << MyStack.Top();
	cout << "\nStack bottom:" << MyStack.Bottom();
	MyStack.pop();
	cout << "\n\n stack after pop():\n";
	MyStack.printList();
	cout << "\n\n Item(2):" << MyStack.GetItem(2);
	MyStack.reverse();
	cout << "\n\n stack after reverse():\n";
	MyStack.printList();
	MyStack.UpdateItem(2, 600);
	cout << "\n\n stack after updating item(2) to 600\n";
	MyStack.printList();
	MyStack.insertAfter(2, 800);
	cout << "\n stack after inserting 800 after item(2):\n";
	MyStack.printList();
	MyStack.insertATfront(1000);
	cout << "\n Stack after inserting 1000 AT Top\n";
	MyStack.printList();
	MyStack.insertATback(2000);
	cout << "\n stack after inserting 2000 AT Bottom\n ";
	MyStack.printList();
	MyStack.clear();
	cout << "\n stack after clear()\n";
	MyStack.clear();

	/*clsMyQueueArr<int>MyQueue;
	MyQueue.push(20);
	MyQueue.push(30);
	MyQueue.push(40);
	MyQueue.push(50);
	MyQueue.push(60);
	MyQueue.push(70);
	cout << "\n\nQueue:\n";
	MyQueue.printList();
	cout << "\nQueue Size:" << MyQueue.size()<<endl;
	cout << "\n Queue Front:" << MyQueue.Front() << endl;
	cout << "\n Queue Back:" << MyQueue.Back() << endl;
	MyQueue.pop();
	cout << "\n\n Queue after pop():\n";
	MyQueue.printList();
	cout << "\n\n item(2):" << MyQueue.GetItem(2);
	MyQueue.reverse();
	cout << "\n\nQueue after reverse():\n";
	MyQueue.printList();
	MyQueue.UpdateItem(2, 600);
	cout << "\n\n Queue after updating item(2) to 600:\n";
	MyQueue.printList();

	MyQueue.insertAfter(2, 800);
	cout << "\n\n Queue after inserting 800 after item(2):\n";
	MyQueue.printList();
	MyQueue.insertATfront(1000);
	cout << "\n\nQueue after inserting 1000 at front:\n";
	MyQueue.printList();

	MyQueue.insertATback(2000);
	cout << "\n\nQueue after inserting 2000 at Back:\n";
	MyQueue.printList();
	cout << "\n\n Queue after clear():\n";
	MyQueue.clear();
   

	/*clsDynamicArray<int>myDynamicArray(6);
	myDynamicArray.setItem(0, 2);
	myDynamicArray.setItem(1, 3);
	myDynamicArray.setItem(2, 4);
	myDynamicArray.setItem(3, 5);
	myDynamicArray.setItem(4, 30);
	myDynamicArray.setItem(5, 6);
	
	cout << "\nis Empty ?" << myDynamicArray.isEmpty();
	cout << "\n Array size:" << myDynamicArray.size();
	cout << "\n array items:\n";
	myDynamicArray.printList();
	
	cout << "\nItem(2):" << myDynamicArray.GetItem(2);
	myDynamicArray.reverse();
	cout << "\n array items after reverse :\n";
	myDynamicArray.printList();
	
	

	

	myDynamicArray.deletItemAT(2);
	cout << "\n array size:" << myDynamicArray.size();
	cout << "\n array Items after deliting Items(2):\n ";
	myDynamicArray.printList();
	myDynamicArray.DeletFirsteItem();
	cout << "\nArray Items  after deliting Firste Item:\n";
	cout << "\n Array size is:" << myDynamicArray.size()<<"\n";
	myDynamicArray.printList();
	myDynamicArray.DeletLastItem();
	cout << "\nArray Items  after deliting laste Item:\n";
	cout << "\n Array size is:" << myDynamicArray.size() << "\n";
	myDynamicArray.printList();
	int index = myDynamicArray.find(30);
	if (index == -1) {
		cout << "\nItem was not found :-(\n";

	}
	else {
		cout << "\n 30 is found at index"<<index;
	}
	myDynamicArray.deletItem(30);
	cout << "\n\n Array  after Deliting 30";
	cout << "\n array size:" << myDynamicArray.size()<<"\n";
	myDynamicArray.printList();
	myDynamicArray.insertAT(1, 500);
	cout << "\narray after insert  500 at index 1:\n";
	cout << "\n array size:" << myDynamicArray.size() << "\n";
	myDynamicArray.printList();
	
	myDynamicArray.insertAT(3, 50);
	cout << "\narray after insert  50 at index 3:\n";
	cout << "\n array size:" << myDynamicArray.size() << "\n";
	myDynamicArray.printList();

	myDynamicArray.insertAT(2, 850);
	cout << "\narray after insert  850 at index 2:\n";
	cout << "\n array size:" << myDynamicArray.size() << "\n";
	myDynamicArray.printList();

	myDynamicArray.insertAT(1, 950);
	cout << "\narray after insert  950 at index 1:\n";
	cout << "\n array size:" << myDynamicArray.size() << "\n";
	myDynamicArray.printList();

	myDynamicArray.insertAT(0, 200);
	cout << "\narray after insert  200 at index 0:\n";
	cout << "\n array size:" << myDynamicArray.size() << "\n";
	myDynamicArray.printList();

	myDynamicArray.insertAT(4, 340);
	cout << "\narray after insert  340 at index 4:\n";
	cout << "\n array size:" << myDynamicArray.size() << "\n";
	myDynamicArray.printList();
	myDynamicArray.insertATbeginning(400);
	cout << "\n\n array after insert 400 in the beginning:\n";
	cout << "\n array size:" << myDynamicArray.size() << "\n";
	myDynamicArray.printList();

	myDynamicArray.insertBefore(2,500);
	cout << "\n\n array after insertt 500  before index 2:\n";
	cout << "\n array size:" << myDynamicArray.size() << "\n";
	myDynamicArray.printList();

	myDynamicArray.insertAfter(2, 600);
	cout << "\n\n array after insert 600 after index 2:\n";
	cout << "\n array size:" << myDynamicArray.size() << "\n";
	myDynamicArray.printList();
	myDynamicArray.insertATEnd(800);

	cout << "\n\n array after insert 800 aT end:\n";
	cout << "\n array size:" << myDynamicArray.size() << "\n";
	myDynamicArray.printList();



	/*clsMyStack<int>MyStack;
	MyStack.push(10);
	MyStack.push(20);
	MyStack.push(30);
	MyStack.push(40);
	MyStack.push(50);
	cout << "\nStack :\n";
	MyStack.print();
	cout << "\n Stack size:" << MyStack.size();
	cout << "\n stack top:" << MyStack.top();
	cout << "\nStack bottom:" << MyStack.Bottom();
	MyStack.pop();
	cout << "\n\n stack after pop():\n";
	MyStack.print();
	cout << "\n\n Item(2):" << MyStack.GetItem(2);
	MyStack.Reverse();
	cout << "\n\n stack after reverse():\n";
	MyStack.print();
	MyStack.updateItem(2, 600);
	cout << "\n\n stack after updating item(2) to 600\n";
	MyStack.print();
	MyStack.insertAfter(2, 800);
	cout << "\n stack after inserting 800 after item(2):\n";
	MyStack.print();
	MyStack.insertAtFront(1000);
	cout << "\n Stack after inserting 1000 AT Top\n";
	MyStack.print();
	MyStack.insertAback(2000);
	cout << "\n stack after inserting 2000 AT Bottom\n ";
	MyStack.print();
	MyStack.clear();
	cout << "\n stack after clear()\n";
	MyStack.clear();


	/*clsMyQueue<int>MYQueue;
	if (MYQueue.isEmpty()) {
		cout << "\nthe queue is  empty";
	}
	else {
		cout << "\nthe queue is not empty";
	}
	MYQueue.push(10);
	MYQueue.push(20);
	MYQueue.push(30);
	MYQueue.push(40);
	MYQueue.push(50);
	
	cout << "\n Queue\n";
	MYQueue.print();
	cout << "\n Queue Size:" << MYQueue.size();
	cout << "\n Queue front:" << MYQueue.front();
	cout << "\n queue Back:" << MYQueue.Back();
	if (MYQueue.isEmpty()) {
		cout << "\nthe queue is empty";
	}
	else {
		cout << "\nthe queue is not empty";
	}
	MYQueue.pop();
	cout << "\n\n  Queue after pop():\n";
	MYQueue.print();
	cout << "\n\n Item(2):" << MYQueue.GetItem(2);

	MYQueue.Reverse();
	cout << "\n\nQueue after reverse():";
	MYQueue.print();

	MYQueue.updateItem(2, 600);
	cout << "\n\n Queue after updating Item(2) to 600 \n";
	MYQueue.print();
	MYQueue.insertAfter(2, 800);
	cout << "\n\n Queue after inserting 800 after item(2):\n";
	MYQueue.print();

	MYQueue.insertAtFront(1000);
	cout << "\n\n Queue after inserting 1000 AT front:\n";
	MYQueue.print();
	MYQueue.insertAback(2000);
	cout << "\n\n Queue after  inserting 2000 AT back:\n ";
	MYQueue.print();

	MYQueue.clear();
	cout << "\n\n Queue after clear():\n";
	MYQueue.print();











/*	clsDblLinkedList<int>MydbLinkedList;
	if (MydbLinkedList.isEmpty()) {
		cout << "\n\n Yes List is Empty\n";
	}
	else {
		cout << "\n\n No list is not empty\n";
	}
    MydbLinkedList.insertAtBeginning(5);
	MydbLinkedList.insertAtBeginning(4);
	MydbLinkedList.insertAtBeginning(3);
	MydbLinkedList.insertAtBeginning(2);
	MydbLinkedList.insertAtBeginning(1);
	cout << "\n Linked List Content\n";
	MydbLinkedList.printLinkedList();*/
/*	MydbLinkedList.reverse();
	cout << "\n Linked list content after reverse\n";
	MydbLinkedList.printLinkedList();*/
	/*clsDblLinkedList<int>::Node* N;
	N = MydbLinkedList.GetNode(-1);
	cout << "\n Node value is:" << N->value;*/
	//cout << "\nItem(2)value is:" << MydbLinkedList.GetItem(2);
	/*MydbLinkedList.updateItem(2, 500);
	cout << "\n After Updating Item(2):\n";
	MydbLinkedList.printLinkedList();*/
	/*MydbLinkedList.insertAfterIndex(4, 500);
	cout << "\n after insert " << endl;
	MydbLinkedList.printLinkedList();
	/*cout << "\n number of items in  the linked list =" << MydbLinkedList.size();
	if (MydbLinkedList.isEmpty()) {
		cout << "\n\n Yes List is Empty\n";
	}
	else {
		cout << "\n\n No list is not empty\n";
	}
	cout << "\n Executing .clear()\n";
	MydbLinkedList.clear();
	cout << "\nnumber of items in the linkedList:" << MydbLinkedList.size();*/
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
