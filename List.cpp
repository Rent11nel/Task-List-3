#include "List.h"

pRing Push_List(pRing head, int data)
{
	pRing temp = new Ring, a = head;
	if (head == NULL)
	{
		temp->data = data;
		head = temp;
		head->next = head;
	}
	else
	{
		do
		{
			a = a->next;
		} while (a->next != head);
		temp->data = data;
		temp->next = a->next;
		a->next = temp;
	}
	return head;
}

void PrintRing(pRing ring)
{
	pRing temp = ring;
	do
	{
		cout << temp->data << " ";
		temp = temp->next;
	} while (temp != ring);
	cout << "\n";
}

void Task(pRing& p, pRing& q, int k, int L)
{
	pRing cur_q = q;
	do
	{
		cur_q = cur_q->next;
	} while (cur_q->next != q); //„тобы новые студенты добавл€лись в конец списка

	for (int i(0); i < L; ++i)
	{
		for (int j(1); j < k - 1; ++j) p = p->next;

		pRing p_next = p->next->next;
		pRing q_next = cur_q->next;
		pRing temp = p->next;

		p->next = p_next;

		cur_q->next = temp;
		temp->next = q_next;
		cur_q = temp;

		p = p->next;
	}
}
