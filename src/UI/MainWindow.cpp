#include "MainWindow.hpp"

namespace Operator {
    MainWindow::MainWindow () : youtubeBox () {
        add (youtubeBox);
        show_all_children ();
    };
    MainWindow::~MainWindow () {

    };
};
