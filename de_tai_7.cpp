#include <iostream>
#include <iomanip>
#include <string>
#include<conio.h>
#define n 100

using namespace std;

class nha
{
    private:

        string ten_nha, dia_chi, ngay_thue, ten_phong, gia_thue;        
        bool trang_thai;
        int  tien_dien, tien_nuoc;
        float _phi_sinh_hoat;                 
    public:

	    nha()
	    {
	        this->ten_nha="";
    	    this->dia_chi="";
            this->ngay_thue="";
            this->ten_phong="";
    	    this->trang_thai=0;
            this->gia_thue="";               
            this->tien_dien=0;               
            this->tien_nuoc=0;                
            this->_phi_sinh_hoat=0;
	    }

//	Ham nhap
        void nhap_ten_nha();
        void nhap_dia_chi();
        void nhap_ten_phong();
        void nhap_trang_thai();
        void nhap_ngay_thue();
        void nhap_gia_thue();              

//  Ham xuat
        void xuat_ten_nha();
        void xuat_dia_chi();
        void xuat_ten_phong();
        void xuat_trang_thai();
        void xuat_ngay_thue();
        void xuat_gia_thue();                

// Hàm tính phí sinh hoạt
        float phi_sinh_hoat(int &d1, int &d2, int &n1, int &n2 , float &dien, float &nuoc)
        // d1 số điện đầu, d2 số điện cuối, n1 số nước đầu, n2 sô nước cuối, đơn giá điện, đơn giá nước
        {
            int so_dien, so_nuoc;      
            so_dien = d2-d1;
            so_nuoc = n2-n1;
            tien_dien = so_dien*dien;
            tien_nuoc = so_nuoc*nuoc;
            this->_phi_sinh_hoat = tien_dien+tien_nuoc;
            return 0;
        }

        void xuat_phi_sinh_hoat()                   // Hàm xuất phí sinh hoạt
        {
            cout<<this->_phi_sinh_hoat;
        }

        void thue()                                 //  Ham thay doi trang thai thue
        {
            this->trang_thai=1;
        }
        void tra()                                  //  Ham tra nha
	    {
            this->trang_thai=0;
            this->ngay_thue="";
            this->_phi_sinh_hoat=0;
        }

	    
};

void nha::nhap_ten_nha()                            // Hàm nhập tên nhà từ bàn phím
{   
    cin.ignore();
    cout<<"\nNhap ten nha: ";
    getline(cin,this->ten_nha);
}

void nha::nhap_dia_chi()                            // Hàm nhập địa chỉ nhà từ bàn phím
{
    cout<<"Nhap dia chi nha: ";
    getline(cin,this->dia_chi);
}

void nha::nhap_ten_phong()                          // Hàm nhập mã số phòng từ bàn phím
{
    cout<<"\nNhap Ma so phong:";
    cin>>this->ten_phong;
}

void nha::nhap_trang_thai()                         // Hàm nhập tình trạng cho thuê từ bàn phím
{
    cout<<"\n\t------Nhap tinh trang cho thue------\n"<<"Da thue: Nhap so 1 \t\t Chua thue: Nhap so 0"<<endl;
    cout<<"Tinh trang: ";
    cin>>this->trang_thai;
}

void nha::nhap_ngay_thue()                          // Hàm nhập ngày thuê từ bàn phím
{
    cout<<"\nNgay thue: ";
    cin.ignore();
    getline(cin,this->ngay_thue);
}

void nha::nhap_gia_thue()                           // Hàm nhập giá thuê từ bàn phím    
{
    cout<<"\nVD: 4 trieu nhap 4.000.000\n";
    cout<<"Nhap gia cho thue: ";
    getline(cin,gia_thue);
}

void nha::xuat_ten_nha()                            // Hàm xuất tên nhà
{
    cout<<this->ten_nha;
}

void nha::xuat_dia_chi()                            // Hàm xuất địa chỉ
{
    cout<<this->dia_chi;
}

void nha::xuat_ten_phong()                          // Hàm xuất tên phòng
{
    cout<<this->ten_phong;
}

void nha::xuat_trang_thai()                         // Hàm xuất trạng thái 
{
    cout<<this->trang_thai;
}

void nha::xuat_ngay_thue()                          // Hàm xuất ngày thuê
{
    cout<<this->ngay_thue;
}

void nha::xuat_gia_thue()                           // Hàm xuất giá thuê     
{
    cout<<this->gia_thue;
}

class khach_hang
{
    private:
    string ho_ten, que_quan, gioi_tinh, cmnd;                 // cmnd là chứng minh nhân dân
    int nam_sinh;
    public:

    khach_hang()
    {
        this->ho_ten="";
        this->gioi_tinh="";
        this->nam_sinh=0;
        this->que_quan="";
        this->cmnd="";
    }
//  Ham nhap
    void nhap_thong_tin_khach();

// Ham xuat
    void xuat_ten();
    void xuat_gt();
    void xuat_qq();                     //  Quê quán
    void xuat_sn();
    void xuat_cmnd();

// Xoa thong tin
    void xoa()
    {
        this->ho_ten="";
        this->gioi_tinh="";
        this->nam_sinh=0;
        this->que_quan="";
        this->cmnd="";
    }
};

void khach_hang::nhap_thong_tin_khach()             // Hàm nhập thông tin khách hàng từ bàn phím
{
    cout<<"\n\t==== Nhap thong tin chu thue ====\n\n";
    
    cout<<"Nhap ten chu thue: ";            //Tên chủ thuê
    getline(cin,this->ho_ten);

    cout<<"Nhap gioi tinh: ";               //Giới tính
    getline(cin,this->gioi_tinh);

    cout<<"Nhap que quan: ";                //Quê quán
    getline(cin,this->que_quan);

    cout<<"Nhap so chung minh thu: ";       //Số cmnd
    getline(cin,this->cmnd);

    cout<<"Nhap nam sinh: ";                //Năm sinh
    cin>>this->nam_sinh;
}

void khach_hang::xuat_ten()                         // Hàm xuất tên chủ thuê
{
    cout<<this->ho_ten;
}

void khach_hang::xuat_gt()                          // Hàm xuất giới tính
{
    cout<<this->gioi_tinh;
}

void khach_hang::xuat_qq()                          // Hàm xuất quê quán
{
    cout<<this->que_quan;
}

void khach_hang::xuat_sn()                          // Hàm xuất nắm sinh
{
    cout<<this->nam_sinh;
}

void khach_hang::xuat_cmnd()                        // Hàm xuất số cmnd
{
    cout<<this->cmnd;
}

// Hàm khởi tạo nhà và phòng
void khoi_tao(int &a, int &b, nha *h1, nha *h2)     //truyền con trỏ h1: nhà, h2: phòng
{
    
//	Ham Nhap du lieu
	cout<<"\n\t==== Khoi tao nha va phong ====\n"<<endl;
    cout<<"Nhap so nha hien co: "; cin>>a;
    cout<<"Nhap so phong hien co: "; cin>>b;

    for (int i=0; i<a; i++)
    {
    h1[i].nhap_ten_nha();
    h1[i].nhap_dia_chi();
    h1[i].nhap_gia_thue();                      
    h1[i].nhap_trang_thai();
    }
    for (int i=0; i<b; i++)
    {
    h2[i].nhap_ten_phong();
    cin.ignore();                               
    h2[i].nhap_gia_thue();                      
    h2[i].nhap_trang_thai();
    }
}

//Hàm tạo danh sách phòng
void danh_sach_phong(int const a, int const b, nha *const h1, nha *const h2)            
{
    cout<<"\n\t\t\t\t\t\t\t           ==== Xuat du lieu ====\n";                                 
    cout<<"\n\t\t\t\t\t\t\t              * Danh sach nha *\n\n";                                
    cout<<setfill('-');     cout<<setw(175)<<'-'<<endl;      cout<<setfill(' ');            
    cout<<setw(8)<<left<<"ID";  
    cout<<setw(20)<<left<<"Ten nha";    
    cout<<setw(45)<<left<<"Dia chi";
    cout<<setw(30)<<left<<"Tinh trang";
    cout<<setw(35)<<left<<"Ngay thue";                                                      
    cout<<setw(20)<<left<<"Gia thue"<<endl;                                                
    cout<<setfill('-');     cout<<setw(175)<<'-'<<endl;      cout<<setfill(' ');            
    for(int i=0; i<a; i++)
    {
        cout<<setw(8)<<left<<i+1;
        cout<<setw(20)<<left;    h1[i].xuat_ten_nha();
        cout<<setw(49)<<left;    h1[i].xuat_dia_chi();
        cout<<setw(26)<<left;    h1[i].xuat_trang_thai();
        cout<<setw(35)<<left;    h1[i].xuat_ngay_thue();                
        h1[i].xuat_gia_thue();  cout<<"\n\n";                          
    }
    cout<<"\n\t\t\t\t\t\t\t            * Danh sach phong *\n\n";            
    cout<<setfill('-');     cout<<setw(175)<<'-'<<endl;      cout<<setfill(' ');       
    cout<<setw(20)<<left<<"ID";
    cout<<setw(35)<<left<<"Ma so phong";
    cout<<setw(35)<<left<<"Tinh trang";
    cout<<setw(35)<<left<<"Ngay thue";                                  
    cout<<setw(20)<<left<<"Gia thue"<<endl;                             
    cout<<setfill('-');     cout<<setw(175)<<'-'<<endl;      cout<<setfill(' ');        
    for(int i=0; i<b; i++)
    {
        cout<<setw(24)<<left<<i+1;
        cout<<setw(35)<<left;  h2[i].xuat_ten_phong();
        cout<<setw(31)<<left;  h2[i].xuat_trang_thai();
        cout<<setw(35)<<left;  h2[i].xuat_ngay_thue();          
        h2[i].xuat_gia_thue(); cout<<"\n\n";                    
    }
}

// Hàm đặt nhà
void dat_nha(nha *h1, khach_hang *kh1, int const a)
{
    int id;
    cout<<"\n\t=== Dat Nha ===\n";
    cout<<"\nBan muon dat nha co ID la: ";
    cin>>id;
    while(id>a || id<0)                             // Hàm kiểm tra việc nhập dữ liệu có đúng không
    {
    cout<<"Ma so phong khong co thuc !\nMoi nhap lai: ";
    cin>>id;
    }
    h1[id-1].nhap_ngay_thue();
    cout<<"\n\t * Nhap thong tin khach hang *\n";
    kh1[id-1].nhap_thong_tin_khach();
    h1[id-1].thue();

}

// Hàm đặt phòng
void dat_phong(nha *h2,khach_hang *kh2, int const b)
{
    int ms;
    cout<<"\n\t=== Dat Phong ===\n";
    cout<<"\nBan muon dat phong co ma so la: ";
    cin>>ms;
    while(ms>b||ms<0)                               // Hàm kiểm tra việc nhập dữ liệu có đúng không
    {
    cout<<"Ma so phong khong co thuc !\nMoi nhap lai: ";
    cin>>ms;
    }
    h2[ms-1].nhap_ngay_thue();
    cout<<"\n\t * Nhap thong tin khach hang *\n";
    kh2[ms-1].nhap_thong_tin_khach();
    h2[ms-1].thue();
}

// Hàm xuất danh sách khách hàng
void danh_sach_khach(khach_hang *const kh1, khach_hang *const kh2, int const a, int const b)
{
    cout<<"\n\t\t.....Danh sach khach thue nha.....\n\n";
    cout<<setw(25)<<left<<"ID Nha";
    cout<<setw(35)<<left<<"Ho va Ten";
    cout<<setw(15)<<"Gioi Tinh"<<endl;
    cout<<setfill('-');     cout<<setw(80)<<'-'<<endl;      cout<<setfill(' ');
    
    for (int i=0; i<a; i++)
    {
        cout<<setw(15)<<left<<i+1;
        cout<<setw(45)<<left;    kh1[i].xuat_ten();
        cout<<setw(10)<<left;    kh1[i].xuat_gt();
        cout<<endl;
    }

    cout<<"\n\t\t....Danh sach khach thue phong....\n\n";
    cout<<setw(25)<<left<<"ID Phong";
    cout<<setw(35)<<left<<"Ho va Ten";
    cout<<setw(15)<<"Gioi Tinh"<<endl;
    cout<<setfill('-');     cout<<setw(80)<<'-'<<endl;      cout<<setfill(' ');
    
    for (int i=0; i<b; i++)
    {
        cout<<setw(15)<<left<<i+1;
        cout<<setw(45)<<left;     kh2[i].xuat_ten();
        cout<<setw(10)<<left;     kh2[i].xuat_gt();
        cout<<endl;
    }
}

// Hàm xuất thông tin chi tiết của khách hàng
void tt_chi_tiet(khach_hang *kh1, khach_hang *kh2)
{
    int z,i;        //  z là biến lựa chọn nhà hay phòng, i là mã số phòng
    cout<<"\nBan muon xem khach hang thue nha hay phong?\nNha: 1 \t\t Phong: 2\n";
    cout<<"Nhap phim can thuc hien: "; cin>>z;
    //
    if (z==1)
    {
        cout<<"Nhap ID nha cua khach: ";                 cin>>i;
        cout<<"\n\t* Thong tin khach hang *\n\n";
        cout<<"Ho va Ten: "; kh1[i-1].xuat_ten();          cout<<endl;
        cout<<"Gioi tinh: "; kh1[i-1].xuat_gt();           cout<<endl;
        cout<<"Nam sinh:  "; kh1[i-1].xuat_sn();            cout<<endl;
        cout<<"Que Quan:  "; kh1[i-1].xuat_qq();            cout<<endl;
        cout<<"So chung minh thu: "; kh1[i-1].xuat_cmnd(); cout<<"\n\n";
    }
    //
    else if (z==2)
    {
        cout<<"Nhap ma so phong cua khach: ";            cin>>i;
        cout<<"\n\t* Thong tin khach hang *\n\n";
        cout<<"Ho va Ten: "; kh2[i-1].xuat_ten();          cout<<endl;
        cout<<"Gioi tinh: "; kh2[i-1].xuat_gt();           cout<<endl;
        cout<<"Nam sinh: "; kh2[i-1].xuat_sn();            cout<<endl;
        cout<<"Que Quan: "; kh2[i-1].xuat_qq();            cout<<endl;
        cout<<"So chung minh thu: "; kh2[i-1].xuat_cmnd(); cout<<endl;
    }
    else cout<<"Ban da nhap sai !\n";
}

// Hàm trả phòng
void tra_phong(nha *h1, nha *h2,khach_hang *kh1, khach_hang *kh2)
{
    int t,x;    //  x là mã số nhà hoặc phòng
    cout<<"\n\tBan muon tra nha hay phong ? \nTra nha: 1\t\t\tTra phong: 2\n";
    cout<<"\tNhap phim ban lua chon: "; cin>>t;
    if (t==1)
    {
        cout<<"Nhap ID nha muon tra: ";
        cin>>x;
        h1[x-1].tra();
        kh1[x-1].xoa();
    }
    if (t==2)
    {
        cout<<"Nhap ma so phong muon tra: ";
        cin>>x;
        h2[x-1].tra();
        kh2[x-1].xoa();
    }
}

// Hàm nhập thông tin điện nước
void dien_nuoc(int const a, int const b, nha *h1, nha *h2)
{
    float dien, nuoc;
    int d1, d2, n1, n2;                                     // d1 số điện đầu, d2 số điện cuối, n1 số nước đầu, n2 sô nước cuối
    cout<<"\nVD: don gia dien la: 4000\n";
    cout<<"Nhap don gia dien: ";    cin>>dien;
    cout<<"Nhap don gia nuoc: ";    cin>>nuoc;
    cout<<"\nNhap du lieu\n";
    for(int i=0;i<a;i++)
    {
        cout<<"\nNha "<<i+1<<":\nDien:\n";
        do                                                  // Hàm kiểm tra việc nhập dữ liệu có đúng không
        {
        cout<<"So dau:  ";
        cin>>d1;
        cout<<"So cuoi: ";
        cin>>d2;
        cout<<"\nNuoc:\n";
        cout<<"So dau:  ";
        cin>>n1;
        cout<<"So cuoi: ";
        cin>>n2;
        if (d1>d2 || n1>n2)
            {cout<<"So dau phai nho hon so cuoi !";}
    }
        while (d1>d2 || n1>n2);
        h1[i].phi_sinh_hoat(d1,d2,n1,n2,dien,nuoc);
    }
    for(int i=0;i<b;i++)
    {
        cout<<"\nPhong "<<i+1<<":\nDien:\n";
        do                                                  // Hàm kiểm tra việc nhập dữ liệu có đúng không
        {
        cout<<"So dau:  ";
        cin>>d1;
        cout<<"So cuoi: ";
        cin>>d2;
        cout<<"\nNuoc:\n";
        cout<<"So dau:  ";
        cin>>n1;
        cout<<"So cuoi: ";
        cin>>n2;
        if (d1>d2 || n1>n2)
            {cout<<"So dau phai nho hon so cuoi !";}
    }
        while (d1>d2 || n1>n2);
        h2[i].phi_sinh_hoat(d1,d2,n1,n2,dien,nuoc);
    }
}

// Hàm xuất các khoản tiền cần thu
void quan_ly_thu_tien(int const a, int const b, nha *const h1, nha *const h2)                          
{
    cout<<"\n\t\t\t\t\t\t==== Quan ly thu tien ====\n";                                 
    cout<<"\n\t\t\t\t\t\t     * Danh sach nha *\n\n";                                 
    cout<<setfill('-');     cout<<setw(125)<<'-'<<endl;      cout<<setfill(' ');            
    cout<<setw(8)<<left<<"ID";  
    cout<<setw(20)<<left<<"Ten nha";
    cout<<setw(35)<<left<<"Ngay thue"; 
    cout<<setw(35)<<left<<"Phi sinh hoat";
    cout<<setw(20)<<left<<"Gia thue"<<endl;
    cout<<setfill('-');     cout<<setw(125)<<'-'<<endl;      cout<<setfill(' ');
    for(int i=0; i<a; i++)
    {
        cout<<setw(8)<<left<<i+1;
        cout<<setw(20)<<left;    h1[i].xuat_ten_nha();
        cout<<setw(35)<<left;    h1[i].xuat_ngay_thue();
        cout<<setw(35)<<left;    h1[i].xuat_phi_sinh_hoat();                
        h1[i].xuat_gia_thue();  cout<<"\n\n";                          
    }
    
    cout<<"\n\t\t\t\t\t\t\t* Danh sach phong *\n\n";                                 
    cout<<setfill('-');     cout<<setw(125)<<'-'<<endl;      cout<<setfill(' ');            
    cout<<setw(8)<<left<<"ID";  
    cout<<setw(20)<<left<<"Ten phong";
    cout<<setw(35)<<left<<"Ngay thue"; 
    cout<<setw(35)<<left<<"Phi sinh hoat";
    cout<<setw(20)<<left<<"Gia thue"<<endl;
    cout<<setfill('-');     cout<<setw(125)<<'-'<<endl;      cout<<setfill(' ');
    for(int i=0; i<b; i++)
    {
        cout<<setw(8)<<left<<i+1;
        cout<<setw(20)<<left;    h2[i].xuat_ten_nha();
        cout<<setw(35)<<left;    h2[i].xuat_ngay_thue();
        cout<<setw(35)<<left;    h2[i].xuat_phi_sinh_hoat();                
        h2[i].xuat_gia_thue();  cout<<"\n\n";                          
    }
}

// hàm hiển thị giao diện chính của chương trình
void trang_chu(int &v)                 
{
    cout<<"\n---- CHUONG TRINH QUAN LY CHO THUE NHA, PHONG TRO ----\n\n";
    cout<<"1) Khoi tao \n2) Xem danh sach nha, phong tro \n3) Dat nha, phong \n4) Xem danh sach khach thue";
    cout<<"\n5) Xem thong tin khach thue \n6) Nhap du lieu dien, nuoc";
    cout<<"\n7) Quan ly thu tien \n8) Tra nha, phong  \n9) Thoat \n";
    cout<<"\n******************************************************\n";
    cout<<"\n\tMoi nhap cac phim de thuc hien: ";
    cin>>v;
}

int main()
{
    int a=n, b=n, v;                //  v là biến lựa chọn chạy ct
	nha h1[a], h2[b];               // h1 là nhà, h2 là phòng
    khach_hang kh1[a], kh2[b];      // kh1 là khách thuê nhà, kh2 là khách thuê phòng

    do
    {
        system("cls");
        trang_chu(v);
        cin.ignore();
        switch(v)
        {
            case 1:
            {
                khoi_tao(a,b,h1,h2);
                break;
            }
            case 2:
            {
                danh_sach_phong(a,b,h1,h2);
                getch();
                break;
            }
            case 3:
            {
                cout<<"\nBan muon dat nha hay phong ?\nDat nha: 1\t\tDat phong: 2\n";
                cout<<"Nhap phim ban lua chon: "; int d; cin>>d;

                if(d==1)
                {
                    dat_nha(h1,kh1,a);
                    cout<<"\n\tDat nha thanh cong !\n";
                }

                if(d==2)
                {
                    dat_phong(h2,kh2,b);
                    cout<<"\n\tDat phong thanh cong !\n";
                }
                getch();
                break;
            }
            case 4:
            {
                danh_sach_khach(kh1,kh2,a,b);
                getch();
                break;
            }
            case 5:
            {
                tt_chi_tiet(kh1,kh2);
                getch();
                break;
            }
            case 6:     
            {
                dien_nuoc(a,b,h1,h2);
                break;
            }
            case 7:    
            {
                quan_ly_thu_tien(a,b,h1,h2);
                getch();
                break;
            }
            case 8:
            {
                tra_phong(h1,h2,kh1,kh2);
                cout<<"\n\tBan da tra nha, phong thanh cong !\n";
                getch();
                break;
            }            
            case 9:
            {
                cout<<"\nChuong trinh ket thuc. Cam on ban da su dung chuong trinh !\n";
                cout<<"                & ********************* &\n\n";
                break;
            }
            default:                                            // Hàm kiểm tra việc nhập dữ liệu có đúng không
            {
                cout<<"\nNhap sai moi ban nhap lai\n";
                getch();
                break;
            }
        }
    }
    while(v!=9);
    return 0;
}