open Jest;

describe("Grains", () => {
  open Expect;

  test("square 1", () =>
    expect(Grains.square(1)) |> toEqual(Some(1))
  );
  test("square 2", () =>
    expect(Grains.square(2)) |> toEqual(Some(2))
  );
  test("square 3", () =>
    expect(Grains.square(3)) |> toEqual(Some(4))
  );
  test("square 4", () =>
    expect(Grains.square(4)) |> toEqual(Some(8))
  );
  test("square 16", () =>
    expect(Grains.square(16)) |> toEqual(Some(32768))
  );
  test("square 0", () =>
    expect(Grains.square(0)) |> toEqual(None)
  );
  test("square -1", () =>
    expect(Grains.square(-1)) |> toEqual(None)
  );
  test("square >64", () =>
    expect(Grains.square(65)) |> toEqual(None)
  );

  test("total", () =>
    expect(Grains.total()) |> toEqual(18446744073709551615.0)
  );
});
