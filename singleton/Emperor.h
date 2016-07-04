#include <iostream>



using namespace std;

class CEmperor
{
public:
    static CEmperor * GetInstance();
    static void ReleaseInstance();
    void EmperorInfo(void);
    void SetEmperorTag(string tag);

private:
    CEmperor(void);
    virtual ~CEmperor(void);
    CEmperor(const CEmperor&);
    CEmperor& operator=(const CEmperor&);

    static CEmperor *m_pEmperor;
    string m_EmperorTag;

    class CGarbo
    {
    public:
        CGarbo()
        {
            cout << "Create Garbo" << endl;
        }

        ~CGarbo()
        {
            cout << "Destroy Garbo" << endl;
            if (NULL != m_pEmperor) {
                cout << "Remove instance" << endl;
                delete m_pEmperor;
                m_pEmperor = NULL;
            }
        }
    };

    static CGarbo m_Garbo;
};