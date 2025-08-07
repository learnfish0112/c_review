#include <stdio.h>

#define RECTANGLE (0)
#define CIRCLE (1)

struct point {
    int x, y;
};

struct shape {
    int shape_knid;
    struct point center;

    union {
        struct {
            int height, weight;
        } rectangle;

        struct {
            int radious;
        } circle;
    } u;
} s;

//return shape area
int get_shape_area(struct shape s);
//return 0 mean success
int move_shape_center(struct shape *s, int x_offset, int y_offset);
int scaling_shape(struct shape *s, double c);

int main()
{
    struct shape s = {
        .shape_knid = RECTANGLE,
        .center = {0, 0},
        .u = {10, 2},
    };

    printf("print shape area before scaling_shape: %d\n", get_shape_area(s));
    scaling_shape(&s, 2);
    printf("print shape area before scaling_shape: %d\n", get_shape_area(s));
    printf("print shape_center before mv, (%d, %d)\n", s.center.x, s.center.y);
    move_shape_center(&s, 10, 10);
    printf("print shape_center after mv, (%d, %d)\n", s.center.x, s.center.y);

    return 0;
}

int get_shape_area(struct shape s) {
    return (s.shape_knid == RECTANGLE) ? (s.u.rectangle.height * s.u.rectangle.weight) : (s.u.circle.radious * s.u.circle.radious);
}

int move_shape_center(struct shape *s, int x_offset, int y_offset) {
    s->center.x += x_offset;
    s->center.y += y_offset;
    return 0;
}

int scaling_shape(struct shape *s, double c) {
    if(s->shape_knid == RECTANGLE) {
        s->u.rectangle.height *= c;
        s->u.rectangle.weight *= c;
    } else if(s->shape_knid == CIRCLE) {
        s->u.circle.radious *= c;
    } else {
        printf("Unknown shape\n");
        return -1;
    }

    return 0;
}
