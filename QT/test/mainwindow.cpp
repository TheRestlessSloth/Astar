#include "mainwindow.h"
#include "ui_mainwindow.h"
int sizex, sizey;

// Создаём динамический массив:
//int **map = new int *[sizex];  // int - тип элементов матрицы, **matrix - указатель на указатель
                                 // new - ключевое слово, которое выделяет память в куче под x элементов типа int
//for (int i=0; i<x; i++)
  // map[i] = new int [sizey];   // для каждого элемента динамического массива matrix создаём ещё по 'y' элементов типа int
     // в итоге имеем двумерный динамический массив, аля матрица

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_HorSize_valueChanged(int arg1)
{
   sizex = arg1;
}

void MainWindow::on_VertSize_valueChanged(int arg1)
{
   sizey = arg1;
}

void MainWindow::on_genmapbt_clicked()
{
//генерация карты
    /*for(int i = 0; i<sizey; i++)
    {
        for(int j=0; j<sizex; j++)
        {
            map[i][j] = rand() % 2;
        }
    }
    */
}

