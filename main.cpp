#include "main.h"

using namespace std;

int main() 
{
	int tabOperations[200][2];

	{
		char balec2;
	
		for (int i=0; i<200; i++)
		{
			tabOperations[i][0] = 0;
			tabOperations[i][1] = 0;
		}
	
		string const nomFichierOperation = "InstancesCRP/1_operations.csv";
	
		ifstream fichier3(nomFichierOperation.c_str());
	
		if (fichier3)
		{
			for(int i=0; i<10; i++)
			{
				fichier3.get(balec2);
			}
	
			int i=0;
			while (fichier3.get(balec2) && fichier3.get(balec2) && fichier3.get(balec2) && fichier3.get(balec2))
			{
				i++;
	
				fichier3 >> tabOperations[i][0];
	
				for(int i=0; i<3; i++)
				{
					fichier3.get(balec2);
				}
	
				fichier3.get(balec2);
	
				if(balec2=='A')
					tabOperations[i][1] = 1;
	
				//cout << "operation : " << tabOperations[i][0] << ", " << tabOperations[i][1] << endl;
			}
		}
		else
		{
			cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
		}
	}
	
	baie maBaie(0);

	cout << endl;

	maBaie.fprintPile(1);

	/*while(maBaie.retrait(1) != -1)
		cout << "ok" << endl;*/

    return 0;
}