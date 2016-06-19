#pragma once
#include "Cats.h"
#include <vector>

using namespace std;

class Zoo {
	
public:
	vector<Felid*> m_Cats;
	~Zoo() {
		for (int i = 0; i < m_Cats.size(); i++) {
			m_Cats.erase(m_Cats.begin(), m_Cats.end());
		}
	}
	void AddCat(Felid *pNewCat) {
		m_Cats.push_back(pNewCat);
	}
	void SayHello() {
		for (int i = 0; i < m_Cats.size(); i++) {
			m_Cats[i]->meow();
		}
	}
};

