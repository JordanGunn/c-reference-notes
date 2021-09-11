//
// Created by User on 1/29/2021.
//

#ifndef LECTURE_CODE_LECTURE_2_COMMAND_LINE_ARGUMENTS_H
#define LECTURE_CODE_LECTURE_2_COMMAND_LINE_ARGUMENTS_H

int commandLineExample(int argc, char *argv[]) {

    // 'argc >= 1 always '
    // first argument is always the name of the executable


    printf("Name of the program: %s\n", argv[0]);

    if (argc == 1) {
        printf("No other arguments passed.\n");
        return 0;
    }

    for (int index = 1; index < argc; index++) {
        printf("args[%d] = %s\n", index, argv[index]);
    }

    return 0;
}

#endif //LECTURE_CODE_LECTURE_2_COMMAND_LINE_ARGUMENTS_H
