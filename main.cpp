#include <iostream>
#include "ChainNode.h"
using namespace std;

int main()
{    

    int choice;
    int maxsize;
    cout << "Maxsize = ";
    cin >> maxsize;
    ChainNode ChainNode(maxsize);
    
    do
    {
        cout << "===================== MENU ======================\n" 
             << "1. Add element\n"
             << "2. Remove element\n"
             << "3. Size\n"
             << "4. Set\n"
             << "5. Get\n"
             << "6. Indexof\n"
             << "7. Display elements\n"
             << "8. oddCount\n"
             << "9. evenCount\n"
             << "10. sum\n"
             << "11. mean\n"
             << "12. sort\n"
             << "13. randomize\n"
             << "14. switchsort\n"
             << "15. clear\n"
             << "16. sumcursizemaxsize\n"
             << "17. Exit\n"
             << "================================================\n "
             << "Enter your choice: ";
             
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int index, element;
            cout << "Enter index : ";
            cin >> index;
            cout << "Enter element is : " ;
            cin >> element;
            ChainNode.add(index, element);
            break;
        }
        case 2:
        {
            int index;
            cout << "Enter index to remove: ";
            cin >> index;
            int removedElement = ChainNode.remove(index);
            cout << "Removed element: " << removedElement << endl;
            break;
        }
        case 3:
            {
                cout << "Size of ArrayList: " << ChainNode.size() << endl;
            break;
            }
        case 4:
        {
           int index, element;
            cout << "Enter index  : ";
            cin >> index; 
            cout << "Enter element : ";
            cin >> element;
            ChainNode.set(index, element);
            break;
        }    
        case 5:
            {
            int index;
            cout << "index in get: ";
            cin >> index;
            
                cout << ChainNode.get(index) << endl;
            }
            cout << endl;
            break;   
        case 6:
            {
            int element;
            cout << "Elements in indexof: ";
            cin >> element;
            
                cout << ChainNode.indexof(element) << endl;
            }
            break;
         case 7:
            cout << "List elements: ";
            ChainNode.display();
            break;                
        case 8:
            cout << "oddCount : " << ChainNode.oddCount() << endl;
            break;
        case 9:
            cout << "evenCount : " << ChainNode.evenCount() << endl;
            break; 
        case 10:
            cout << "sum : " << ChainNode.sum() << endl;
            
            break;  
        case 11:
            cout << "mean : " << ChainNode.mean() << endl;
            break;
        case 12:
            cout << "sort : ";
            ChainNode.sort();
            break;
        case 13:
            cout << "randomize  "  << endl;
            ChainNode.randomize(maxsize);
    
            break;
        case 14:
            cout << "switchsort : ";
            ChainNode.switch_sort();
            break;   
        case 15:
            cout << "clear ";
            ChainNode.clear();
            break;
        case 16:
            cout << "sum of Element + Maxsize  " << endl;
            ChainNode.sumcursizemaxsize(); 
            break;                                         
        case 17:
            cout << "Exiting program" << endl;
            break;                    
        default:
            cout << "Invalid choice. Please try again " << endl;
            break;
        }

    } while (choice != 17);


    return 0;
}