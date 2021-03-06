package com.trimeshkit.meshtools;

/**
 * Created by wahmed on 07/11/2017.
 */

public class Definations {

    public enum RenderingModeType {
        SOLID(0), WIREFRAME(1), SOLID_WIREFRAME(2), POINTS(3), NORMALS(4);

        private final int value;

        private RenderingModeType(int value) {
            this.value = value;
        }

        public int getValue() {
            return value;
        }
    }

    public enum SketchModeType {
        BOUNDARY(0), FLAT(1), FEATURE(2), CONVEX(3), CONCAVE(4), VALLEY(5),  RIDGE(6), NONE(7);

        private final int value;

        private SketchModeType(int value) {
            this.value = value;
        }

        public int getValue() {
            return value;
        }
    }
}
