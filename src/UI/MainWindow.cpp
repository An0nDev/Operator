#include "MainWindow.hpp"

namespace Operator::UI {
    MainWindow::MainWindow () : mainBox () {
        add (mainBox);
        show_all_children ();
    };
    MainWindow::~MainWindow () {};
};
