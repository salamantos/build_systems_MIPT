with open('index.h', 'w') as file:
    file.write('#include <iostream>\n')
    file.write('''
        void do_absolutely_nothing() {
            std::cout << "I did absolutely nothing!" << std::endl;
        }
    ''')
