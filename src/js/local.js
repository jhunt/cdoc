$(function () {
  $('.doc a.source').click(function (event) {
    event.preventDefault();
    console.log('test!');
    console.log($(this).next('pre'));
    $(this).next('pre').toggleClass('visible');
  });
});
// vim:ts=2:sts=2:sw=2:et
