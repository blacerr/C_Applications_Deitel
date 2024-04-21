#include <SFML/Graphics.h>

int main() {
    // Pencereyi oluştur
    sfVideoMode mode = { 800, 600, 32 };
    sfRenderWindow* window = sfRenderWindow_create(mode, "SFML Example", sfResize | sfClose, NULL);

    // Daireyi oluştur
    sfCircleShape* circle = sfCircleShape_create();
    sfCircleShape_setRadius(circle, 30);
    sfCircleShape_setFillColor(circle, sfRed);
    sfVector2f position = { 400, 300 };
    sfCircleShape_setPosition(circle, position);

    // Hareket hızı
    float moveSpeed = 5.0f;

    // Ana döngü
    while (sfRenderWindow_isOpen(window)) {
        sfEvent event;
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(window);
            }
        }

        // Hareket kontrolü
        if (sfKeyboard_isKeyPressed(sfKeyRight)) {
            position.x += moveSpeed;
        }
        if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
            position.x -= moveSpeed;
        }
        if (sfKeyboard_isKeyPressed(sfKeyDown)) {
            position.y += moveSpeed;
        }
        if (sfKeyboard_isKeyPressed(sfKeyUp)) {
            position.y -= moveSpeed;
        }

        // Dairenin konumunu güncelle
        sfCircleShape_setPosition(circle, position);

        // Ekranı temizle
        sfRenderWindow_clear(window, sfBlack);

        // Daireyi ekrana çiz
        sfRenderWindow_drawCircleShape(window, circle, NULL);

        // Ekranı güncelle
        sfRenderWindow_display(window);
    }

    // Bellek temizleme
    sfCircleShape_destroy(circle);
    sfRenderWindow_destroy(window);

    return 0;
}
