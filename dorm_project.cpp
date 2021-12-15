#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Admin
{
    char username[50];
    char password[50];
};
struct occupant
{
    char name[10];
    char rent_tatus[10];
    char gender[10];
    char room_no[10];
} x[100];
int n,i,j=0,a=0,sum=0,g,num;
void read();
void add();
void view();
void search();
void edit();
void del();
void write();
void login();
int main()
{
    login();
    read();
    int c=0;
    printf("KMITL Dormitory Management System\n");
    printf("===============================\n");
    while(c!=4)
    {
        printf("**Enter your choice**\n\n1. Add Information\n2. View Information\n3. Search\n"
               "4. Edit Information\n5. Delete Information\n6. exit\n\nOption=");
        scanf("%d",&c);//choice for option

        if(c==1)//add
        {
            add();
        }
        else if(c==2)//view
        {
            view();
        }
        else if(c==3)//search
        {
            search();
        }
        else if(c==4)//edit
        {
            edit();
            return 0;
        }
        else if(c==5)//deleter
        {
            del();
        }
        else if(c==6)//exit
        {
            write();
            return 0;
        }
        else
        {
            printf("\n\nInvalid input , try again by using valid inputs");
        }
        printf("\n\n");
    }
}

void add()
{
    printf("\n\n");
    printf("Already data inputed on the database =%d\n\n",num);
    printf("How many entry do you want to add=");
    scanf("%d",&n);
    sum=n+num;

    for(i=num,j=0; i<sum; i++)
    {
        printf("\n");
        fflush(stdin);
        printf("Enter occupant's Name =");
        gets(x[i].name);
        printf("Enter rent status =");
        gets(x[i].rent_tatus);
        printf("Enter gender =");
        gets(x[i].gender);
        printf("Enter room numbers =");
        gets(x[i].room_no);

        printf("\n");
        j++;
        a++;
        num++;
    }
}

void view()
{
    for(i=0; i<num; i++)
    {
        printf("\n");
        printf("Name =");
        puts(x[i].name);
        printf("rent status =");
        puts(x[i].rent_tatus);
        printf("gender =");
        puts(x[i].gender);
        printf("Room number=");
        puts(x[i].room_no);
        printf("\n\n");
    }
}
void edit()
{
    int q,p;
    fflush(stdin);
    printf("What do you want to edit ?\n");
    printf("Enter your option\n");
    printf("1.Name\n2.rent status\n3.gender\n4.room number\n");
    printf("Option=");
    scanf("%d",&q);
    if(q<5)
    {
        printf("Enter the serial no of that occupant= (0 - %d)=",num-1);
        scanf("%d",&p);
        if(p<num)
        {
            if(q==1)
            {
                fflush(stdin);
                printf("Enter the new name=");
                gets(x[p].name);

            }
            else if(q==2)
            {
                fflush(stdin);
                printf("Enter the new rent status=");
                gets(x[p].rent_tatus);
            }
            else if(q==3)
            {
                fflush(stdin);
                printf("enter the new gender =");
                gets(x[p].gender);
            }
            else if(q==4){
                fflush(stdin);
                printf("enter the new room number =");
                gets(x[p].room_no);
            }
        }
        else
        {
            printf("\n\nInvalid Room \nTry Again !!\n\n");
        }
    }
    else
    {
        printf("\n\nInvalid option\nTry Again!!\n\n");
    }
}

void search()
{
    int s,h;
    char u[100];
    printf("By what do you want to search ?\n");
    printf("1.Room no.\n2.Name\n3.rent status\n4.gender\nOption =");
    scanf("%d",&h);
    if(h==1)
    {
        int f=1;
        fflush(stdin);
        printf("Enter room number =");
        gets(u);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(strcmp(u,x[g].room_no) == 0)
            {
                printf("\n");
                printf("Room Number=%d\n",g);
                printf("Name =");
                puts(x[g].name);
                printf("rent status =");
                puts(x[g].rent_tatus);
                printf("\n\n");
                f=0;
            }
        }
        if(f==1)
            printf("\nNot Found\n");
    }
    else if(h==2)
    {
        int f=1;
        fflush(stdin);
        printf("Enter your name=");
        gets(u);
        for(g=0; g<num; g++)
        {
            if(strcmp(u,x[g].name)==0)
            {
                printf("\n");
                printf("Room Number=%d\n",g);
                printf("Name =");
                puts(x[g].name);
                printf("rent status =");
                puts(x[g].rent_tatus);
                printf("\n\n");
                f=0;
            }
        }
        if(f==1)
            printf("\nNot Found\n");
    }
    else if(h==3)
    {
        int f=1;
        fflush(stdin);
        printf("Enter rent status =");
        gets(u);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(strcmp(u,x[g].rent_tatus) == 0)
            {
                printf("\n");
                printf("Room Number=%d\n",g);
                printf("Name =");
                puts(x[g].name);
                printf("rent status =");
                puts(x[g].rent_tatus);
                printf("\n\n");
                f=0;
            }
        }
        if(f==1)
            printf("\nNot Found\n");
    }
    else if(h==4)    {
        int f=1;
        fflush(stdin);
        printf("Enter rent status =");
        gets(u);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(strcmp(u,x[g].gender) == 0)
            {
                printf("\n");
                printf("Room Number=%d\n",g);
                printf("Name =");
                puts(x[g].name);
                printf("rent status =");
                puts(x[g].gender);
                printf("\n\n");
                f=0;
            }
        }
        if(f==1)
            printf("\nNot Found\n");
    }

    else
        printf("\n\nInvalid input\n\n");
}
void del()
{
    int f,h;
    printf("List of occupant (with serial number)\n");
    for(i=0; i<num; i++)
    {
        printf("serial number=%d  ",i);
        printf("Name=");
        puts(x[i].name);
    }
    printf("Enter the serial number of the occupant that you want to delete=");
    scanf("%d",&f);
    if(f<num)
    {
        printf("What do you want ?\n");
        printf("1.Remove the whole record\n2.Remove Name\n3.Remove rent status\n4.remove gender\n5.remove room number\nOption = ");
        scanf("%d",&h);
        if(h==1)
        {
            while(f<num)
            {
                strcpy(x[f].name,x[f+1].name);
                strcpy(x[f].rent_tatus, x[f + 1].rent_tatus);
                strcpy(x[f].gender,x[f+1].gender);
                strcpy(x[f].room_no,x[f+1].room_no);

                f++;
            }
            num--;
        }
        else if(h==2)
        {
            strcpy(x[f].name,"Cleared");
        }
        else if(h==3)
        {
            strcpy(x[f].rent_tatus, "Cleared");
        }
        else if(h==4)
        {
            strcpy(x[f].gender, "Cleared");
        }
        else if(h==5)
        {
            strcpy(x[f].room_no, "Cleared");
        }
    }
    else
        printf("\n\nInvalid Room number\n");

}
void read()
{
    FILE *fp = fopen("occupant.txt","r");
    if(fp == NULL)
    {
        fp = fopen("occupant.txt","w");
        fclose(fp);
        printf("File does not exist, I JUST CREATED IT, exiting...\n\n\n");
    }

    num = fread(x, sizeof(struct occupant), 100, fp);
    fclose(fp);
}

void write()
{
    FILE *fp = fopen("occupant.txt","w");
    if(fp == NULL)
    {
        printf("Error");
        exit(0);
    }
    fwrite(x, sizeof(struct occupant), num, fp);
    fclose(fp);
}

void login(){
    char tempu[50], temppd[50], u[50], pd[50];
    char line[100];
    int q =0;
    struct Admin temp, admin_list[20], Uinput;
    FILE *ad = fopen("admin_user.txt","r");
    if (!ad){
        exit(0);
    }
    while (fgets(line,20,ad)) {
        sscanf(line, "%s %s", &tempu, &temppd);
        strcpy( temp.username, tempu);
        strcpy( temp.password, temppd);
        admin_list[q] = temp;
        q++;
    }
    fclose(ad);
    printf("Enter username password");
    scanf("%s %s", &u, &pd);
    strcpy( Uinput.username, u);
    strcpy( Uinput.password, pd);
    for(int index = 0; index < 20; index++ ){
        if(strcmp(u,admin_list[index].username) == 0){
            if (strcmp(pd,admin_list[index].password) != 0){
                printf("Invalid password");
                exit(0);
            }
            else{
                printf("access granted!\n");
                break;
            }
        }
        else{
            printf("You are not admin\n");
            exit(0);
        }
    }
}