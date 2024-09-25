/*
 Copyright (c) 2012-2015 Nion Company.
*/

#include "Application.h"

int main(int argv, char **args)
{
    Application app(argv, args);
    app.setStyle("windowsvista");    

    if (app.initialize())
        return app.exec();

    return 0;
}
